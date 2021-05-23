/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNVCardUnknownPropertyDescription : NSObject

{
    NSString *_propertyName;
    NSString *_originalLine;
}

@property (copy) NSString *propertyName;
@property (copy) NSString *originalLine;

- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
