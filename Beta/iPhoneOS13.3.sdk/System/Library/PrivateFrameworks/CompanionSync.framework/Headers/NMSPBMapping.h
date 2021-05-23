/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@interface NMSPBMapping : NSObject

{
    Class _requestClass;
    Class _responseClass;
}

@property (retain, nonatomic) Class requestClass;
@property (retain, nonatomic) Class responseClass;

- (id)description;

@end
