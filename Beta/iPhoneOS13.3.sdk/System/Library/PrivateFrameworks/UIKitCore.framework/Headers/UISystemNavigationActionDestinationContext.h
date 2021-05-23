/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface UISystemNavigationActionDestinationContext : NSObject

{
    NSString *_title;
    NSString *_bundleId;
    NSURL *_URL;
    NSString *_sceneIdentifier;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)systemNavigationActionContextWithTitle:(id)arg1 bundleId:(id)arg2;
+ (id)systemNavigationActionContextWithURL:(id)arg1;
+ (id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2;
+ (id)systemNavigationActionContextWithTitle:(id)arg1 sceneIdentifier:(id)arg2;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
