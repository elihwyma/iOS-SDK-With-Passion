/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class FTServiceStatus;

@interface FTiMessageStatus : NSObject

{
    FTServiceStatus *_serviceStatus;
}

@property (nonatomic, readonly) FTServiceStatus *serviceStatus;
@property (nonatomic, readonly) _Bool iMessageSupported;

- (id)initPrivate;

@end
