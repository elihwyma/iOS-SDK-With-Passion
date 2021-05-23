/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingDependency.h>

@class PLAccountingQualificationEventEntry;

@interface PLAccountingQualificationDependency : PLAccountingDependency

{
    PLAccountingQualificationEventEntry *_qualificationEvent;
}

@property (retain) PLAccountingQualificationEventEntry *qualificationEvent;

- (id)range;
- (void)setRange:(id)arg1;
- (id)ID;
- (id)activationDate;
- (id)initWithQualificationEvent:(id)arg1;

@end
