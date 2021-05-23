/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFTableColumnAlignment : NSObject <Swift>

{
    struct {
        unsigned int columnAlignment:1;
        unsigned int dataAlignment:1;
        unsigned int isEqualWidth:1;
    } _has;
    _Bool _isEqualWidth;
    int _columnAlignment;
    int _dataAlignment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int columnAlignment;
@property (nonatomic) int dataAlignment;
@property (nonatomic) _Bool isEqualWidth;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasColumnAlignment;
- (_Bool)hasDataAlignment;
- (_Bool)hasIsEqualWidth;

@end
