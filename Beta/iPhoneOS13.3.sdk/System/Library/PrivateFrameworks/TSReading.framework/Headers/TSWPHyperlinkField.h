/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPSmartField.h>

@class NSString, NSURL;

@interface TSWPHyperlinkField : TSWPSmartField

{
    NSURL *_url;
}

@property (retain, nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic, readonly) NSString *displayText;

+ (_Bool)schemeIsValidForURL:(id)arg1;
+ (_Bool)schemeIsValidForURLReference:(id)arg1;
+ (id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2;
+ (id)defaultFileURL;
+ (id)defaultMailURL;
+ (id)newURLFromURLReference:(id)arg1;
+ (id)urlReferenceFromURL:(id)arg1;
+ (int)schemeFromURL:(id)arg1;
+ (id)defaultFieldStyleIdentifier;
+ (id)defaultWebURL;

- (void)dealloc;
- (int)scheme;
- (_Bool)isFileURL;
- (id)fullPath;
- (int)elementKind;
- (_Bool)allowsEditing;
- (id)filePath;
- (_Bool)hasDisplayText;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 url:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)canonicalRepresentationURL;
- (id)urlReference;
- (void)setURLReference:(id)arg1;
- (id)urlPrefix;

@end
