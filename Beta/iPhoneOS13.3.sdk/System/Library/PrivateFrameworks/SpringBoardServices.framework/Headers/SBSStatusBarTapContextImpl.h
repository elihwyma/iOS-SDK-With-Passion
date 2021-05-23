/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@interface SBSStatusBarTapContextImpl : NSObject

{
    int _styleOverride;
}

@property (nonatomic) int styleOverride;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyleOverride:(int)arg1;

@end
