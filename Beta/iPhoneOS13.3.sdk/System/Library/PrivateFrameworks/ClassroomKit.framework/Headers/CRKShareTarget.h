/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATTaskClient, DMFControlGroupIdentifier, NSData, NSDictionary, NSString;

@interface CRKShareTarget : NSObject

{
    _Bool _group;
    _Bool _course;
    _Bool _instructor;
    _Bool _supportsFileURLs;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_type;
    NSString *_identifier;
    NSString *_displayName;
    NSString *_secondaryName;
    NSData *_iconImageData;
    CATTaskClient *_taskClient;
}

@property (retain, nonatomic) CATTaskClient *taskClient;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *secondaryName;
@property (retain, nonatomic) NSData *iconImageData;
@property (nonatomic, getter=isGroup) _Bool group;
@property (nonatomic, getter=isCourse) _Bool course;
@property (nonatomic, getter=isInstructor) _Bool instructor;
@property (nonatomic) _Bool supportsFileURLs;

+ (id)sandboxExtensionsForFileURLs:(id)arg1;
+ (id)sandboxExtensionForPath:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToShareTarget:(id)arg1;
- (id)operationToSendItems:(id)arg1 fromBundleIdentifier:(id)arg2 description:(id)arg3 previewImageData:(id)arg4;

@end
