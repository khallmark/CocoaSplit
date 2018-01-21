//
//  CSOutputBase.h
//  CocoaSplit
//
//  Created by Zakk on 1/20/18.
//

#import <Foundation/Foundation.h>
#import "CapturedFrameData.h"
#import "CSOutputWriterProtocol.h"

@interface CSOutputBase : NSObject <CSOutputWriterProtocol>

@property (assign) BOOL errored;
@property (assign) int output_framecnt;
@property (assign) int output_bytes;
@property (readonly) NSUInteger buffered_frame_count;
@property (assign) NSUInteger buffered_frame_size;
@property (assign) int framerate;
@property (strong) NSString *stream_output;
@property (strong) NSString *stream_format;
@property (assign) int samplerate;
@property (assign) int audio_bitrate;
-(NSUInteger)frameQueueSize;
-(bool)queueFramedata:(CapturedFrameData *)frameData;
-(void) initStatsValues;
-(bool) stopProcess;



@end
