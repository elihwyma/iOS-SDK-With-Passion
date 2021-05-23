/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSError.h>

@interface XBLaunchImageError : NSError

{
    _Bool _fatal;
}

@property (readonly, getter=isFatal) _Bool fatal;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 fatal:(_Bool)arg4;

@end
