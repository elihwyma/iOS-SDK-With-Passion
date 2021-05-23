/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary;

@interface REHTMLElement : NSObject

{
    NSData *_data;
}

@property (nonatomic, readonly) NSArray *classes;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSData *encodedData;

+ (id)elementWithHTMLString:(id)arg1;
+ (id)htmlElementWithTag:(id)arg1 content:(id)arg2;
+ (id)nav;
+ (id)link:(id)arg1 title:(id)arg2;
+ (id)div;
+ (id)h1:(id)arg1;
+ (id)elementWithHTMLData:(id)arg1;
+ (unsigned long long)_defaultStringEncoding;
+ (id)script:(id)arg1;
+ (id)h2:(id)arg1;
+ (id)h3:(id)arg1;
+ (id)h4:(id)arg1;
+ (id)h5:(id)arg1;
+ (id)h6:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)addChild:(id)arg1;
- (id)_contentString;
- (id)addChildren:(id)arg1;
- (id)_encodedData;
- (id)_encodeString:(id)arg1;
- (id)append:(id)arg1;
- (id)_prefixContentString;
- (id)_suffixContentString;
- (id)elementByAddingClass:(id)arg1;
- (id)elementByAddingClasses:(id)arg1;
- (id)elementBySettingClasses:(id)arg1;
- (id)elementBySettingAtttibutes:(id)arg1;
- (id)elementByAddingAtttibute:(id)arg1 value:(id)arg2;
- (id)elementByAddingAtttibutes:(id)arg1;

@end
