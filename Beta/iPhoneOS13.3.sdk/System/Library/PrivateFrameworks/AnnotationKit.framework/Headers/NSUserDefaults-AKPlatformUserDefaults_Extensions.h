/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (AKPlatformUserDefaults_Extensions)

+ (id)akDataForColor:(id)arg1;
+ (id)akDataForFont:(id)arg1;
+ (id)akDataForTextAttributes:(id)arg1;

- (void)akSetColor:(id)arg1 forKey:(id)arg2;
- (id)akColorForKey:(id)arg1;
- (void)akSetFont:(id)arg1 forKey:(id)arg2;
- (id)akFontForKey:(id)arg1;
- (void)akSetTextAttributes:(id)arg1 forKey:(id)arg2;
- (id)akTextAttributesForKey:(id)arg1;

@end
