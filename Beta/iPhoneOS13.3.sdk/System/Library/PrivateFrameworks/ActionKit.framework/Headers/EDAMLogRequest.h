/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMSearchRecord;

@interface EDAMLogRequest : FATObject

{
    EDAMSearchRecord *_searchRecord;
}

@property (retain, nonatomic) EDAMSearchRecord *searchRecord;

+ (id)structName;
+ (id)structFields;

@end
