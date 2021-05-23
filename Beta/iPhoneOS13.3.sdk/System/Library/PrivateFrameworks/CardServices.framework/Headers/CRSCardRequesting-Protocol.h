/*
 Image: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
 */

#import <CardServices/Swift-Protocol.h>

@protocol CRContent;

@protocol CRSCardRequesting <Swift>

@property (nonatomic, readonly) id <CRContent> content;
@property (nonatomic, readonly) unsigned long long format;

@end
