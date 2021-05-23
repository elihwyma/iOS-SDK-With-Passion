/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSDChangeableInfo <Swift>

@property (nonatomic, readonly) _Bool isUserModifiable;
@property (nonatomic, readonly) Class editorClass;

- (unsigned short)beginCollectingChanges;
- (unsigned short)endCollectingChanges;
- (unsigned short)willChangeProperty: /* Error: Ran out of types for this method. */;

@end
