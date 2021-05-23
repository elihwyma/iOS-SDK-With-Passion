/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface SXFontFamily : NSObject

{
    NSString *_familyName;
    NSSet *_fontFaces;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSSet *fontFaces;

- (id)fontFaceWithAttributes:(id)arg1 size:(long long)arg2;
- (id)initWithFamilyName:(id)arg1 faces:(id)arg2;

@end
