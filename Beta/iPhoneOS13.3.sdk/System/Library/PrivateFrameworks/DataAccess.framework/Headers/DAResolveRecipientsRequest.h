/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject

{
    _Bool _retrieveCertificates;
    _Bool _retrieveAvailablilty;
    NSArray *_emailAddresses;
    NSDate *_startTime;
    NSDate *_endTime;
}

@property (retain, nonatomic) NSArray *emailAddresses;
@property (nonatomic) _Bool retrieveCertificates;
@property (nonatomic) _Bool retrieveAvailablilty;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithEmailAddresses:(id)arg1;
- (id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(_Bool)arg2 retrieveAvailability:(_Bool)arg3 withStartTime:(id)arg4 endTime:(id)arg5;

@end
