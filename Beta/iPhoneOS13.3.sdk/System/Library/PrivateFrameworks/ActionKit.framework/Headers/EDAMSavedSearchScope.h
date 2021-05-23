/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMSavedSearchScope : FATObject

{
    NSNumber *_includeAccount;
    NSNumber *_includePersonalLinkedNotebooks;
    NSNumber *_includeBusinessLinkedNotebooks;
}

@property (retain, nonatomic) NSNumber *includeAccount;
@property (retain, nonatomic) NSNumber *includePersonalLinkedNotebooks;
@property (retain, nonatomic) NSNumber *includeBusinessLinkedNotebooks;

+ (id)structName;
+ (id)structFields;

@end
