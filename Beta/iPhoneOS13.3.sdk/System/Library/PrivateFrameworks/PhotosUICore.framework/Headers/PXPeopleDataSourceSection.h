/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXPeopleDataSourceSection : NSObject

{
    _Bool _disclosed;
    unsigned long long _personFetchType;
    NSString *_disclosedTitle;
    NSString *_unDisclosedTitle;
}

@property (nonatomic, readonly) unsigned long long personFetchType;
@property (getter=isDisclosed) _Bool disclosed;
@property (copy, nonatomic) NSString *disclosedTitle;
@property (copy, nonatomic) NSString *unDisclosedTitle;

- (id)initWithPersonFetchType:(unsigned long long)arg1;

@end
