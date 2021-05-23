/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class CNChangeHistoryAnchor;

@interface ContactFolderItemsSyncContext : NSObject

{
    int _abPersonChangeId;
    int _abGroupChangeId;
    CNChangeHistoryAnchor *_cnChangeAnchor;
}

@property (nonatomic) int abPersonChangeId;
@property (nonatomic) int abGroupChangeId;
@property (retain, nonatomic) CNChangeHistoryAnchor *cnChangeAnchor;

@end
