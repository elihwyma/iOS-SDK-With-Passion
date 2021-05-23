/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFType.h>

@class NSArray, NSDictionary, NSString, NSURL, WFImage;

@interface WFFileType : WFType

{
    NSString *_string;
    const struct __CFString *_utType;
    NSString *_pboardType;
    NSString *_OSType;
}

@property (nonatomic, readonly) WFImage *icon;
@property (nonatomic, readonly) WFImage *documentIcon;
@property (copy, nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) const struct __CFString *utType;
@property (nonatomic, readonly, getter=isDeclared) _Bool declared;
@property (nonatomic, readonly, getter=isDynamic) _Bool dynamic;
@property (nonatomic, readonly) NSString *typeDescription;
@property (nonatomic, readonly) NSDictionary *typeDeclaration;
@property (nonatomic, readonly) NSURL *declaringBundleURL;
@property (nonatomic, readonly) NSArray *typesConformedTo;
@property (nonatomic, readonly) NSString *fileExtension;
@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSString *pboardType;
@property (nonatomic, readonly) NSString *OSType;

+ (_Bool)supportsSecureCoding;
+ (id)typeWithString:(id)arg1;
+ (id)typeFromFilename:(id)arg1;
+ (id)typesFromUTTypes:(id)arg1;
+ (id)typeWithUTType:(const struct __CFString *)arg1;
+ (id)typeFromMIMEType:(id)arg1;
+ (id)typesForTagClass:(const struct __CFString *)arg1 tag:(const struct __CFString *)arg2 conformingToType:(const struct __CFString *)arg3;
+ (id)cachedFileTypeForUTType:(const struct __CFString *)arg1;
+ (id)typeWithUTType:(const struct __CFString *)arg1 string:(id)arg2;
+ (id)typeFromFileExtension:(id)arg1;
+ (id)typeFromPasteboardType:(id)arg1;
+ (id)typesFromUTTypes:(id)arg1 excludingType:(id)arg2;
+ (id)typeForTagClass:(const struct __CFString *)arg1 tag:(const struct __CFString *)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)conformsToType:(id)arg1;
- (_Bool)conformsToUTType:(const struct __CFString *)arg1;
- (id)initWithUTType:(const struct __CFString *)arg1;
- (id)initWithUTType:(const struct __CFString *)arg1 string:(id)arg2;
- (_Bool)isEqualToType:(id)arg1;
- (_Bool)isEqualToUTType:(const struct __CFString *)arg1;
- (_Bool)conformsToUTTypes:(id)arg1;
- (id)conformingTypesWithFileExtension:(id)arg1;
- (id)conformingTypesWithMIMEType:(id)arg1;
- (id)preferredTagWithClass:(const struct __CFString *)arg1;
- (id)conformingTypesWithTagClass:(const struct __CFString *)arg1 tag:(id)arg2;

@end
