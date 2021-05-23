/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCSolTagID : NSObject <Swift>

{
    _Bool _isFavorited;
    _Bool _isAutoFavorited;
    _Bool _isGroupable;
    NSString *_identifier;
    unsigned long long _whitelistLevel;
    double _specificity;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long whitelistLevel;
@property (nonatomic) double specificity;
@property (nonatomic) _Bool isFavorited;
@property (nonatomic) _Bool isAutoFavorited;
@property (nonatomic) _Bool isGroupable;

+ (_Bool)supportsSecureCoding;
+ (id)orphanID;
+ (id)discardedOrphanID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1;
- (id)initWithID:(id)arg1 subscibedTags:(id)arg2 autoFavoritedTags:(id)arg3 groupableTags:(id)arg4 whitelistLevel:(unsigned long long)arg5 rules:(id)arg6;

@end
