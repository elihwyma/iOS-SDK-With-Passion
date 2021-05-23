/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray, SXJSONLinearGradient, UIColor;

@interface SXDocumentStyle : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIColor *topBackgroundColor;
@property (nonatomic, readonly) SXJSONLinearGradient *topBackgroundGradient;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXJSONArray *conditional;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

@end
