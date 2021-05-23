/*
 Image: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
 */

#import <CDDataAccessExpress/DAOofParams.h>

@class NSString;

@protocol DAOofResponseDelegate;

@interface DAOofSettingsInfo : DAOofParams

{
    NSString *_requestID;
    id <DAOofResponseDelegate> _consumer;
}

@property (retain, nonatomic) NSString *requestID;
@property (weak, nonatomic) id <DAOofResponseDelegate> consumer;

@end
