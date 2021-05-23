/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFApiResults : NSObject <Swift>

{
    struct {
        unsigned int status:1;
        unsigned int resultType:1;
    } _has;
    int _status;
    int _resultType;
    NSArray *_flights;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int status;
@property (nonatomic) int resultType;
@property (copy, nonatomic) NSArray *flights;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasStatus;
- (_Bool)hasResultType;
- (id)initWithProtobuf:(id)arg1;

@end
