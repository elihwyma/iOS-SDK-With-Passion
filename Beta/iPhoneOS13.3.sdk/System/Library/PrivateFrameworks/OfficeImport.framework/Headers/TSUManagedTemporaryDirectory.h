/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSUManagedTemporaryDirectory : NSObject

{
    NSURL *_URL;
}

@property (nonatomic, readonly) NSURL *URL;

- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
