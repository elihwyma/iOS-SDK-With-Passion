/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUWeakReference : NSObject

{
    id mObject;
}

@property (nonatomic, readonly) id object;

+ (id)weakReferenceWithObject:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end
