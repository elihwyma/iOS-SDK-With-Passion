/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (id)init;
- (Class)classForLoadingModelType:(int)arg1;
- (Class)classForLoadingModelType:(int)arg1 isUpdatable:(_Bool)arg2;
- (Class)classForCompilingModelType:(int)arg1;

@end
