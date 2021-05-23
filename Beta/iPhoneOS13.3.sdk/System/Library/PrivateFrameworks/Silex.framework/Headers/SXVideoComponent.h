/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

#import <Silex/Swift-Protocol.h>

@class NSString, SXJSONDictionary;

@interface SXVideoComponent : SXComponent <Swift>

@property (nonatomic, readonly) NSString *stillImageIdentifier;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) _Bool enablePreroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXJSONDictionary *advertising;

+ (id)typeString;

- (unsigned long long)traits;
- (double)aspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)enablePrerollWithValue:(id)arg1 withType:(int)arg2;

@end
