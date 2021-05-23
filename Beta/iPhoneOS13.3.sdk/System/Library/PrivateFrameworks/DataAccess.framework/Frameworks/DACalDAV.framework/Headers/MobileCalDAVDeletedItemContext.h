/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface MobileCalDAVDeletedItemContext : NSObject

{
    int _entityType;
    NSNumber *_rowid;
}

@property (retain, nonatomic) NSNumber *rowid;
@property (nonatomic) int entityType;

@end
