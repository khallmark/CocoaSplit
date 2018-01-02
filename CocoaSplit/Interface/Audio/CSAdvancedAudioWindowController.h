//
//  CSAdvancedAudioWindowController.h
//  CocoaSplit
//
//  Created by Zakk on 8/6/16.
//

#import <Cocoa/Cocoa.h>
#import "CaptureController.h"
#import "CAMultiAudioEffectsTableController.h"

@interface CSAdvancedAudioWindowController : NSWindowController <NSWindowDelegate>


@property (weak) CaptureController *controller;
@property (weak) IBOutlet CAMultiAudioEffectsTableController *effectsController;

@end
