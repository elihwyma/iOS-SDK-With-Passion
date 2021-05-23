/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitErrorLogEntry : NSObject

{
    NSError *_error;
    NSString *_annotation;
}

@property (nonatomic, readonly) NSString *annotation;
@property (nonatomic, readonly) NSError *error;

- (void)dealloc;
- (id)initWithError:(id)arg1 annotation:(id)arg2;

@end
