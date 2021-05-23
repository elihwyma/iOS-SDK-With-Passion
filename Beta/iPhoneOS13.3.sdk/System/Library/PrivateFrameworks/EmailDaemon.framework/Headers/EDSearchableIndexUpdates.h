/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EDSearchableIndexUpdates : NSObject

{
    NSArray *_itemsRequiringIndexing;
    NSArray *_removedIdentifiers;
    NSArray *_removedDomainIdentifiers;
}

@property (copy, nonatomic) NSArray *itemsRequiringIndexing;
@property (copy, nonatomic) NSArray *removedIdentifiers;
@property (copy, nonatomic) NSArray *removedDomainIdentifiers;
@property (nonatomic, readonly) _Bool hasUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (id)updates;

@end
