/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@interface CKContactsSupport : NSObject

@property (nonatomic, readonly) Class CKCNContactStore;
@property (nonatomic, readonly) Class CKCNContactFetchRequest;
@property (nonatomic, readonly) Class CKCNPhoneNumber;
@property (nonatomic, readonly) Class CKCNContact;
@property (nonatomic, readonly) Class CKCNMutableContact;

+ (id)sharedInstance;

@end
