/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSHistoryVisitIdentifier : NSObject <Swift>

{
    unsigned long long _hash;
    NSString *_urlString;
    double _visitTime;
    WBSHistoryItem *_associatedHistoryItem;
    WBSHistoryVisit *_associatedHistoryVisit;
}

@property (copy, nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) double visitTime;
@property (retain, nonatomic) WBSHistoryItem *associatedHistoryItem;
@property (retain, nonatomic) WBSHistoryVisit *associatedHistoryVisit;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLString:(id)arg1 visitTime:(double)arg2;

@end
