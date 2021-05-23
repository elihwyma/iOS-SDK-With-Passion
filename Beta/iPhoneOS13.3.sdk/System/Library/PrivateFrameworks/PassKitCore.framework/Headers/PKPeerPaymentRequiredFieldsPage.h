/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface PKPeerPaymentRequiredFieldsPage : NSObject

{
    NSArray *_requiredFields;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
}

@property (retain, nonatomic) NSArray *requiredFields;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;

- (id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2;

@end
