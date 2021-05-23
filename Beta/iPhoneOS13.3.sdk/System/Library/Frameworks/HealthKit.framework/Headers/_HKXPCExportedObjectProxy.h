/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _HKXPCExportedObjectProxy : NSObject

{
    id _weakExportedObject;
    Class _weakExportedObjectClass;
}

@property (weak, nonatomic) id weakExportedObject;
@property (retain, nonatomic) Class weakExportedObjectClass;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
