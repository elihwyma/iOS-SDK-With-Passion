/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject

{
    NSMutableArray *_mutableItems;
    NSString *_identifier;
    NSString *_rowTitle;
    NSString *_groupTitle;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *rowTitle;
@property (copy, nonatomic) NSString *groupTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithIdentifier:(id)arg1;
- (id)items;
- (void)addItem:(id)arg1;
- (_Bool)shouldCoalesceItems;
- (_Bool)restrictionEnabled;

@end
