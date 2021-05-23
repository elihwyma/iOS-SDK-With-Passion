/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface UIDraggingSystemSceneMetadata : NSObject <Swift>

{
    NSString *_activityType;
    NSString *_sceneIdentifier;
}

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *sceneIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
