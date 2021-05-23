/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/Swift-Protocol.h>

@class GCMotion, NSString;

@protocol GCNamedProfile <Swift>

@property (readonly) NSString *name;
@property (retain) GCMotion *_motion;

- (unsigned short)setController: /* Error: Ran out of types for this method. */;
- (unsigned short)handleEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)setPlayerIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithController: /* Error: Ran out of types for this method. */;
- (unsigned short)productCategory;
- (unsigned short)valueChangedHandler;
- (unsigned short)isBluetoothAndUSBMirrored;

@end
