/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXDocumentStyle, SXJSONArray, SXJSONDictionary, SXMetaData;

@protocol SXAdvertisingSettings, SXAutoPlacement, SXDocumentLayout, SXHints;

@interface SXDocument : SXJSONObject

{
    NSString *_identifier;
}

@property (nonatomic, readonly) SXJSONArray *allComponents;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) SXMetaData *metadata;
@property (nonatomic, readonly) NSString *specVersion;
@property (nonatomic, readonly) SXJSONArray *components;
@property (nonatomic, readonly) SXJSONDictionary *resources;
@property (nonatomic, readonly) SXJSONDictionary *componentStyles;
@property (nonatomic, readonly) SXJSONDictionary *textStyles;
@property (nonatomic, readonly) SXJSONDictionary *componentTextStyles;
@property (nonatomic, readonly) SXJSONDictionary *componentLayouts;
@property (nonatomic, readonly) id <SXDocumentLayout> layout;
@property (nonatomic, readonly) SXDocumentStyle *documentStyle;
@property (nonatomic, readonly) id <SXAdvertisingSettings> advertisingSettings;
@property (nonatomic, readonly) id <SXAutoPlacement> autoplacement;
@property (nonatomic, readonly) id <SXHints> hints;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (CDUnknownBlockType)objectValueClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;

- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (id)initWithIdentifier:(id)arg1 JSONObject:(id)arg2 andVersion:(id)arg3;

@end
