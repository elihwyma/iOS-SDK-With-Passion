/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBApplication.h>

@interface SBWebApplication : SBApplication

+ (id)_webAppIdentifierFromWebClipIdentifier:(id)arg1;
+ (id)_webClipIdentifierFromWebAppIdentifier:(id)arg1;

- (Class)iconClass;
- (id)iconIdentifier;
- (_Bool)isWebApplication;

@end
