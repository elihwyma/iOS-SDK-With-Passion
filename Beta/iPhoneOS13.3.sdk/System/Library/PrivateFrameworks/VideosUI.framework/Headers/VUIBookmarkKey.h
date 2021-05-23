/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIBookmarkKey : NSObject

{
    NSString *_identifier;
    long long _keyType;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long keyType;

- (id)init;
- (id)description;
- (id)initWithIdentifier:(id)arg1 keyType:(long long)arg2;

@end
