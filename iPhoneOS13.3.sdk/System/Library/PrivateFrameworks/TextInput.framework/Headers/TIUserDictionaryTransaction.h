//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding>
{
    TIUserDictionaryEntryValue *_valueToDelete;
    TIUserDictionaryEntryValue *_valueToInsert;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TIUserDictionaryEntryValue *valueToInsert; // @synthesize valueToInsert=_valueToInsert;
@property(retain, nonatomic) TIUserDictionaryEntryValue *valueToDelete; // @synthesize valueToDelete=_valueToDelete;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

