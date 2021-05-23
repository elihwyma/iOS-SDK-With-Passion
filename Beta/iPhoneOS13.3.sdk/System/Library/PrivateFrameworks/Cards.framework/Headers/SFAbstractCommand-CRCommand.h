/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <SFAbstractCommand.h>

@class NSDictionary, NSString;

@interface SFAbstractCommand (CRCommand)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long commandDirection;
@property (copy, nonatomic, readonly) NSString *referenceIdentifier;

@end
