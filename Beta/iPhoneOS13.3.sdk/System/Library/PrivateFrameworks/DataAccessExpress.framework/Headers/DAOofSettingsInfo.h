/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <DataAccessExpress/DAOofParams.h>

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
