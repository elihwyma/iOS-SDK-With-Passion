/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class NSPredicate;

@interface ASMailboxSearchPredicate : NSObject

{
    NSPredicate *_predicate;
}

@property (retain, nonatomic) NSPredicate *predicate;

- (_Bool)isValid;
- (id)initWithPredicate:(id)arg1;
- (id)getString;
- (id)getStringForPredicate:(id)arg1;
- (id)getStringForComparisonPredicate:(id)arg1;
- (id)getStringForCompoundPredicate:(id)arg1;

@end
