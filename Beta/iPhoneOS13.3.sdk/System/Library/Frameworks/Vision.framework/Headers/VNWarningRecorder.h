/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VNWarningRecorder : NSObject

{
    NSMutableDictionary *_warnings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)valueForWarning:(id)arg1;
- (id)warnings;
- (_Bool)hasWarnings;
- (void)setWarnings:(id)arg1;
- (void)recordWarnings:(id)arg1;

@end
