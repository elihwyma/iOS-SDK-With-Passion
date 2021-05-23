/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNTimepoint.h>

@class NSString;

@interface _MNTimepointAndTransportType : MNTimepoint

{
    int _transportType;
}

@property (nonatomic) int transportType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionary;
- (id)initWithType:(long long)arg1 date:(id)arg2 transportType:(int)arg3;

@end
