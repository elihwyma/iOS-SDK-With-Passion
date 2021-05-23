/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboardsToken : NSObject

{
    int _identifier;
    NSString *canvasIdentifier;
}

@property (copy, nonatomic) NSString *canvasIdentifier;

+ (id)uniqueToken;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
