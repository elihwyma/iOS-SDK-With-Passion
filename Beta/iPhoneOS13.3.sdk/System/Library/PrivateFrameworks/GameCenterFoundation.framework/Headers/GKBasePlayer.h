/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface GKBasePlayer : NSObject

@property (retain, nonatomic, readonly) NSString *playerID;
@property (nonatomic, readonly) NSString *displayName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
