/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/CalDAVServerVersion.h>

@class NSRegularExpression;

@interface CalDAVConcreteServerVersion : CalDAVServerVersion

{
    NSRegularExpression *_regularExpression;
}

@property (retain, nonatomic) NSRegularExpression *regularExpression;

+ (id)prototypes;

@end
