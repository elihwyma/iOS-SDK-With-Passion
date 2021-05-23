/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXSuggestionToken : NSObject

{
    _Bool _canceled;
    unsigned long long _token;
}

@property (nonatomic) unsigned long long token;
@property (nonatomic, readonly) _Bool canceled;

- (id)init;
- (void)cancel;

@end
