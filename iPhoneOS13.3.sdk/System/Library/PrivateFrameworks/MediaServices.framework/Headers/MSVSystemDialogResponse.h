//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MSVSystemDialogResponse : NSObject
{
    long long _buttonIdentifier;
    NSArray *_textFieldValues;
}

@property(readonly, nonatomic) NSArray *textFieldValues; // @synthesize textFieldValues=_textFieldValues;
@property(readonly, nonatomic) long long buttonIdentifier; // @synthesize buttonIdentifier=_buttonIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(long long)arg1 textFieldValues:(id)arg2;

@end

