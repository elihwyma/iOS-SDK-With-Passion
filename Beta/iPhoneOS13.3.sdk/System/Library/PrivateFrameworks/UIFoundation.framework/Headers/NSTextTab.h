/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

#import <UIFoundation/Swift-Protocol.h>

@class NSDictionary;

@interface NSTextTab : NSObject <Swift>

{
    struct {
        unsigned int alignment:4;
        unsigned int refCount:24;
        unsigned int unused:4;
    } _flags;
    double _location;
    id _reserved;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) double location;
@property (nonatomic, readonly) NSDictionary *options;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)columnTerminatorsForLocale:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (oneway void)release;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextAlignment:(long long)arg1 location:(double)arg2 options:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 location:(double)arg2;
- (unsigned long long)tabStopType;

@end
