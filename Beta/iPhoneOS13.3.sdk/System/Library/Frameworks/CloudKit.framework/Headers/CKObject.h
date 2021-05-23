/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKObjCClass, NSSet, NSString;

@interface CKObject : NSObject

@property (nonatomic, readonly) CKObjCClass *objcClass;
@property (nonatomic, readonly) NSSet *propertyNamesNotToEncode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)dictionaryPropertyEncoding;
- (id)initWithPropertyDictionary:(id)arg1;

@end
