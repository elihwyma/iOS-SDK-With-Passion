//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CoreThemeConstantEnumerator : NSObject
{
    void _globalListPointer;
    long long _listIndex;
    long long _indexOfLastEntry;
    BOOL _isPastLastEntry;
}

+ (id)enumeratorForGlobalListAtAddress:(void )arg1;
- (id)lastConstantHelper;
- (id)firstConstantHelper;
- (id)previousConstantHelper;
- (id)nextConstantHelper;
- (id)currentConstantHelper;
- (long long)constantCount;
- (void)_moveToIndexOfLastEntry;
- (id)initWithGlobalListAtAddress:(void )arg1;

@end
